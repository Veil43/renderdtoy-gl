#ifndef MOLLY_TEXTURE_H
#define MOLLY_TEXTURE_H
#include "types.h"

class Texture {
public:
    u32 m_id;

    Texture(const Texture&) =delete;
    Texture& operator=(const Texture&) =delete;

    Texture() noexcept;
    Texture(const char* path);
    // Texture(const molly::ImageData& image);

    Texture(Texture&&) noexcept;
    Texture& operator=(Texture&&) noexcept;

    ~Texture();

    /*
        Bind the texture to a texture unit
    */
    void bind(u32 unit) const noexcept;
    void unbind() const noexcept;
};

#endif // MOLLY_TEXTURE_H