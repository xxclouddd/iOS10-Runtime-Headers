/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface VGLResourceFactory : NSObject  {
    struct recursive_mutex { 
        struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } __m_; 
    } _mutex;
    NSMutableSet *_activeResources;
    NSMutableArray *_unusedResources;
    NSMutableDictionary *_programFactories;
    NSMutableDictionary *_shaderCache;
}


- (void)deleteActiveResources;
- (void)moveUnusedResourceImpl:(id)arg1;
- (id)programFactoryWithCohort:(id)arg1;
- (void)deleteUnusedResources;
- (id)newResourceWithType:(int)arg1 count:(int)arg2;
- (id)fragmentShaderWithName:(id)arg1;
- (id)vertexShaderWithName:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end