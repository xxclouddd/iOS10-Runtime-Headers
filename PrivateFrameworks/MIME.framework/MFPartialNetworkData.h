/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableData;

@interface MFPartialNetworkData : NSObject  {
    NSMutableData *_rawData;
    NSMutableData *_unixData;
}


- (void)purgeCaches;
- (id)dataWithUnixLineEndings;
- (unsigned int)rawDataLength;
- (void)setRawData:(id)arg1;
- (void)appendRawData:(id)arg1;
- (id)copyDataWithUnixLineEndings;
- (void)dealloc;
- (id)rawData;

@end