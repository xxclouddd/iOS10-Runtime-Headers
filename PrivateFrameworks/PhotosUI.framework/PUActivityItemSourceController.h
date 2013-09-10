/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUActivityViewController, NSOrderedSet, NSMutableOrderedSet;

@interface PUActivityItemSourceController : NSObject  {
    NSMutableOrderedSet *_assets;
    NSMutableOrderedSet *_assetItemSources;
    PUActivityViewController *_activityViewController;
}

@property PUActivityViewController * activityViewController;
@property(copy) NSOrderedSet * assets;
@property(readonly) NSOrderedSet * assetItemSources;


- (void)removeAsset:(id)arg1;
- (void)addAsset:(id)arg1;
- (int)countOfAssetType:(short)arg1;
- (id)assetItemSources;
- (void)setAssets:(id)arg1;
- (id)assets;
- (void).cxx_destruct;
- (void)setActivityViewController:(id)arg1;
- (id)activityViewController;

@end