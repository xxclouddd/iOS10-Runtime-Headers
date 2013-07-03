/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, NSDate, NSNumber;

@interface SASmsSearch : SADomainCommand  {
}

@property(copy) NSDate * end;
@property(copy) NSString * message;
@property(copy) NSNumber * outgoing;
@property(copy) NSArray * recipients;
@property(copy) NSArray * senders;
@property(copy) NSDate * start;
@property(copy) NSString * subject;
@property(copy) NSNumber * unread;

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;

- (void)setSenders:(id)arg1;
- (id)senders;
- (void)setUnread:(id)arg1;
- (id)unread;
- (void)setOutgoing:(id)arg1;
- (id)outgoing;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setMessage:(id)arg1;
- (void)setStart:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (id)message;
- (id)end;
- (id)groupIdentifier;
- (id)start;

@end