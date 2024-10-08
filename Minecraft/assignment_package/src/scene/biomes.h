#ifndef BIOMES_H
#define BIOMES_H

#include <glm_includes.h>

class Biomes {
public:
    Biomes();
    ~Biomes();

    static int getHeight(int x, int z);
    static float fbm2D(float x, float z, float persistence, std::string noiseFn, int);
    static float perlinNoise3D(glm::vec3, int);

private:
    static float grasslands(float x, float z);
    static float mountains(float x, float z);
    static float desert(float x, float z);

    static float worleyNoise(float x, float z);
    static glm::vec2 voronoiCenter(glm::vec2);

    static float perlinNoise2D(glm::vec2, int);

    static float surflet(glm::vec2, glm::vec2, int);
    static float surflet3D(glm::vec3, glm::vec3, int);
    static glm::vec2 noise2DNormalVector(glm::vec2, int);
    static glm::vec3 noise3DNormalVector(glm::vec3, int);

    static float interpNoise2D(float x, float z);
    static float smoothNoise2D(float x, float z);
    static float noise2D(float x, float z);
    static float noise1D(float x);

    static float cosineInterp(float a, float b, float t);
    static float linearInterp(float a, float b, float t);
};

#endif // BIOMES_H
