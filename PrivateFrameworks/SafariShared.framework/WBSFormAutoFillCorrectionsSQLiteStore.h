/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFormAutoFillCorrectionsSQLiteStore : NSObject <WBSFormAutoFillCorrectionsStore> {
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
    WBSFormAutoFillCorrectionsDomainNormalizer * _domainNormalizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_defaultDatabaseURL;
+ (id)standardStore;

- (void).cxx_destruct;
- (id)_classificationForFieldWithFingerprint:(id)arg1 onDomain:(id)arg2;
- (void)_closeDatabase;
- (int)_createFreshDatabaseSchema;
- (bool)_isDatabaseOpen;
- (id)_metadataStringValueForKey:(id)arg1;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (bool)_migrateToSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_2;
- (id)_normalizeDomain:(id)arg1;
- (void)_openDatabase;
- (void)_openDatabaseIfNeeded;
- (bool)_removeAllLocalClassifications;
- (bool)_removeLocalClassificationsForDomain:(id)arg1 recordedOnOrAfter:(id)arg2;
- (bool)_replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg1 retrievalURLString:(id)arg2;
- (bool)_replaceDomainWhitelistWithDomains:(id)arg1 retrievalURLString:(id)arg2;
- (int)_schemaVersion;
- (bool)_setCrowdsourcedClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (bool)_setDomain:(id)arg1 isWhitelistedForFeedback:(bool)arg2;
- (void)_setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 date:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)_setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 dateReclassified:(id)arg4;
- (bool)_setMetadataStringValue:(id)arg1 forKey:(id)arg2;
- (bool)_tryToPerformTransactionInBlock:(id /* block */)arg1;
- (void)closeDatabase;
- (void)dealloc;
- (void)getClassificationForFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(id /* block */)arg1;
- (void)getLastWhitelistRetrievalURLStringWithCompletionHandler:(id /* block */)arg1;
- (void)getWhitelistStatusForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithDatabaseURL:(id)arg1;
- (void)removeAllLocalClassificationsWithCompletionHandler:(id /* block */)arg1;
- (void)removeLocalClassificationsForDomain:(id)arg1 recordedOnOrAfter:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)replaceDomainWhitelistWithDomains:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCrowdsourcedClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setDomain:(id)arg1 isWhitelistedForFeedback:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setLastCrowdsourcedCorrectionsRetrievalURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setLastWhitelistRetrievalURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(id /* block */)arg4;

@end