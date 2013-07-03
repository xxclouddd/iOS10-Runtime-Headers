/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSURL, <PKLocalPassFileAccessor>, NSData;

@interface PKLocalPass : PKPass <PKLocalPassFileAccessor, NSCopying> {
    BOOL _removeOnDiskRepresentationOnDealloc;
    NSURL *_fileURL;
    <PKLocalPassFileAccessor> *_fileAccessor;
    NSData *_passData;
}

@property(retain) NSURL * fileURL;
@property <PKLocalPassFileAccessor> * fileAccessor;
@property BOOL removeOnDiskRepresentationOnDealloc;
@property(readonly) NSData * passData;

+ (BOOL)supportsSecureCoding;

- (void)setRemoveOnDiskRepresentationOnDealloc:(BOOL)arg1;
- (BOOL)removeOnDiskRepresentationOnDealloc;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)diff:(id)arg1;
- (BOOL)moveToTemporaryURL;
- (id)serializedFileWrapper;
- (id)copyWithFileAccessor:(id)arg1;
- (id)copyWithFileURL:(id)arg1 fileAccessor:(id)arg2;
- (void)checkRevocationStatusWithCompletion:(id)arg1;
- (id)fileAccessor;
- (id)localizedString:(id)arg1 forPassAtURL:(id)arg2;
- (BOOL)removePassAtURL:(id)arg1 error:(id*)arg2;
- (id)_localizationKeyForMultipleDiff;
- (BOOL)moveToFileURL:(id)arg1;
- (BOOL)movePassAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)serializedFileWrapperFromPassURL:(id)arg1;
- (BOOL)copyPassAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)loadImageSet:(int)arg1 fromPassURL:(id)arg2 displayProfile:(id)arg3;
- (id)loadContentFromPassURL:(id)arg1;
- (void)checkRevocationStatusForPassAtURL:(id)arg1 completion:(id)arg2;
- (BOOL)getResourceValue:(id*)arg1 forKey:(id)arg2 forPassAtURL:(id)arg3 error:(id*)arg4;
- (id)initWithFileURL:(id)arg1 fileAccessor:(id)arg2;
- (id)initWithFileURL:(id)arg1 fileAccessor:(id)arg2 error:(id*)arg3;
- (id)_groupingIDFromPassDictionary:(id)arg1;
- (id)displayProfileWithPassDictionary:(id)arg1 passURL:(id)arg2;
- (id)manifestHashFromPassURL:(id)arg1;
- (id)_beaconsFromPassDictionary:(id)arg1;
- (id)_locationsFromPassDictionary:(id)arg1;
- (id)loadDictionaryFromPassURL:(id)arg1;
- (id)validatePassURL:(id)arg1;
- (void)setFileAccessor:(id)arg1;
- (id)localLocationsURL;
- (void)fetchImageSet:(int)arg1 withCompletion:(id)arg2;
- (void)fetchContentWithCompletion:(id)arg1;
- (id)passData;
- (id)archivedPass;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (void)setFileURL:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)modificationDate;

@end