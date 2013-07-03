/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SUItemCellContext : SUArtworkCellContext  {
    struct __CFDictionary { } *_cachedRatingImages;
    struct { 
        int version; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
        int (*equal)(); 
        int (*hash)(); 
    } _stringSizeCacheKeyCallBacks;
    struct __CFDictionary { } *_stringSizes;
}

@property struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); } stringSizeCacheKeyCallBacks;


- (void)setStringSizeCacheKeyCallBacks:(struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); })arg1;
- (struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); })stringSizeCacheKeyCallBacks;
- (struct CGSize { float x1; float x2; })sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize { float x1; float x2; })arg3;
- (id)ratingImageForRating:(float)arg1 style:(int)arg2;
- (void)resetLayoutCaches;
- (id)init;
- (void)dealloc;

@end