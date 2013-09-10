/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VGLLayeredTexture : VGLTexture  {
    char *_imageData;
    BOOL _hasFillColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _baseColor;
    NSString *_fillTextureName;
    struct CGImage { } *_fillImage;
    struct { 
        int blendMode; 
        float opacity; 
    } _textureLayerProperties;
    NSString *_secondFillTextureName;
    struct CGImage { } *_secondFillImage;
    struct { 
        int blendMode; 
        float opacity; 
    } _secondTextureLayerProperties;
    NSString *_thirdFillTextureName;
    struct CGImage { } *_thirdFillImage;
    struct { 
        int blendMode; 
        float opacity; 
    } _thirdTextureLayerProperties;
}

+ (id)textureWithName:(id)arg1 style:(id)arg2 levelOfDetail:(unsigned int)arg3 scale:(float)arg4;
+ (void)purge;

- (id)_createVKImageForName:(id)arg1 scale:(float)arg2;
- (void)_addTextureLayerWithName:(id)arg1 properties:(struct { int x1; float x2; })arg2;
- (void)_addColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)_buildWithStyle:(id)arg1 levelOfDetail:(unsigned int)arg2 scale:(float)arg3;
- (BOOL)loadTexture;
- (BOOL)decodeTexture;
- (id)initWithName:(id)arg1;
- (void)dealloc;
- (id).cxx_construct;

@end