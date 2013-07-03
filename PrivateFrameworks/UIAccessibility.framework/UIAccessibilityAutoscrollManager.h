/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@class UIScrollView;

@interface UIAccessibilityAutoscrollManager : NSObject  {
    BOOL _autoscrolling;
    BOOL _shouldAutoscroll;
    UIScrollView *_scrollView;
    int _scrollDirection;
    float _autoscrollSpeed;
}

@property(retain) UIScrollView * scrollView;
@property(getter=isAutoscrolling) BOOL autoscrolling;
@property BOOL shouldAutoscroll;
@property int scrollDirection;
@property float autoscrollSpeed;

+ (id)sharedInstance;

- (float)autoscrollSpeed;
- (void)setShouldAutoscroll:(BOOL)arg1;
- (BOOL)shouldAutoscroll;
- (void)setAutoscrolling:(BOOL)arg1;
- (void)setAutoscrollSpeed:(float)arg1;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)decrementAutoscrollSpeed;
- (void)incrementAutoscrollSpeed;
- (void)autoscrollInDirection:(int)arg1;
- (BOOL)isAutoscrolling;
- (int)availableAutoscrollDirections;
- (void)_autoscroll;
- (id)init;
- (void)dealloc;
- (int)scrollDirection;
- (id)scrollView;
- (void)setScrollDirection:(int)arg1;
- (void)setScrollView:(id)arg1;
- (void)pause;

@end