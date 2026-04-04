#include <stdio.h>
#include <math.h>

// Vetor 3D — sem biblioteca, sem framework
typedef struct { float x, y, z; } Vec3;

float dot(Vec3 a, Vec3 b) {
    return a.x*b.x + a.y*b.y + a.z*b.z;
}

Vec3 norm(Vec3 v) {
    float m = sqrtf(dot(v, v));
    return (Vec3){v.x/m, v.y/m, v.z/m};
}

// Raio intersecta esfera unitária centrada na origem
float sphere_hit(Vec3 ro, Vec3 rd) {
    float b = dot(ro, rd);
    float c = dot(ro, ro) - 1.0f;
    float d = b*b - c;
    if (d < 0) return -1.0f;
    return -b - sqrtf(d);  // ponto mais próximo
}

int main(void) {
    // Gradiente de ASCII por brilho (12 níveis)
    const char *shade = ".,-~:;=!*#$@";
    
    Vec3 light = norm((Vec3){2, -2, -1});
    
    int W = 80, H = 40;
    for (int j = 0; j < H; j++) {
        for (int i = 0; i < W; i++) {
            // Coordenadas de tela ? espaço 3D
            float u = (i - W/2.0f) / (W/2.5f);
            float v = (j - H/2.0f) / (H/1.2f);
            
            Vec3 ro = {0, 0, -3};   // origem do raio (câmera)
            Vec3 rd = norm((Vec3){u, v, 1});
            
            float t = sphere_hit(ro, rd);
            if (t > 0) {
                // Normal da esfera = ponto de impacto
                Vec3 p = {ro.x + rd.x*t,
                          ro.y + rd.y*t,
                          ro.z + rd.z*t};
                Vec3 n = norm(p);
                
                // Iluminação difusa (Lambert)
                float diff = dot(n, light);
                if (diff < 0) diff = 0;
                
                // Specular (Phong)
                Vec3 refl = {
                    n.x*2*dot(n,light) - light.x,
                    n.y*2*dot(n,light) - light.y,
                    n.z*2*dot(n,light) - light.z
                };
                float spec = dot(rd, refl);
                if (spec < 0) spec = 0;
                spec = powf(spec, 32);
                
                float bright = diff*0.8f + spec*0.9f;
                int idx = (int)(bright * 11);
                if (idx > 11) idx = 11;
                putchar(shade[idx]);
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}
