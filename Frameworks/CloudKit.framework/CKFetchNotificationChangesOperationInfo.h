/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperationInfo : CKOperationInfo <NSSecureCoding> {
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
}

@property(retain) CKServerChangeToken * previousServerChangeToken;
@property unsigned long long resultsLimit;

+ (bool)supportsSecureCoding;

- (void)setPreviousServerChangeToken:(id)arg1;
- (id)previousServerChangeToken;
- (void)setResultsLimit:(unsigned long long)arg1;
- (unsigned long long)resultsLimit;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end