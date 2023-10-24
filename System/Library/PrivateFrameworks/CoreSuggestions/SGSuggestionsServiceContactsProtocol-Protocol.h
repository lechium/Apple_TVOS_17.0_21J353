//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsObserverProtocol-Protocol.h>

@class CNContact, NSArray, NSDateInterval, NSString, SGContact, SGOrigin, SGRecordId, SGSocialProfile;

@protocol SGSuggestionsServiceContactsProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceContactsConfirmRejectProtocol, _SGSuggestionsServiceContactsObserverProtocol>
- (void)allContactsWithSnippets:(_Bool)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (SGOrigin *)originFromRecordId:(SGRecordId *)arg1 error:(id *)arg2;
- (void)originFromRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(SGOrigin *, NSError *))arg2;
- (NSArray *)cnContactMatchesForRecordIds:(NSArray *)arg1 error:(id *)arg2;
- (void)cnContactMatchesForRecordIds:(NSArray *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)cnContactMatchesForRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)contactMatchesWithContactIdentifiers:(NSArray *)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)contactMatchesWithContactIdentifiers:(NSArray *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)contactMatchesWithContactIdentifier:(NSString *)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)contactMatchesWithContactIdentifier:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)contactMatchesWithContact:(CNContact *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (SGContact *)contactFromRecordID:(SGRecordId *)arg1 error:(id *)arg2;
- (void)contactFromRecordID:(SGRecordId *)arg1 withCompletion:(void (^)(SGContact *, NSError *))arg2;
- (NSArray *)namesForDetailCaches;
- (NSString *)interactionStoreLookupForDetail:(NSString *)arg1 error:(id *)arg2;
- (void)interactionStoreLookupForDetail:(NSString *)arg1 withCompletion:(void (^)(NSString *, NSError *))arg2;
- (NSArray *)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 error:(id *)arg4;
- (void)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (NSArray *)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 onlySignificant:(_Bool)arg4 error:(id *)arg5;
- (void)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 onlySignificant:(_Bool)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (NSArray *)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 onlySignificant:(_Bool)arg4 supportsInfoLookup:(_Bool)arg5 error:(id *)arg6;
- (void)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 onlySignificant:(_Bool)arg4 supportsInfoLookup:(_Bool)arg5 withCompletion:(void (^)(NSArray *, NSError *))arg6;
- (NSArray *)celebrationExtractionsForInterval:(NSDateInterval *)arg1 error:(id *)arg2;
- (void)celebrationExtractionsForInterval:(NSDateInterval *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)birthdayExtractionsForInterval:(NSDateInterval *)arg1 error:(id *)arg2;
- (void)birthdayExtractionsForInterval:(NSDateInterval *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)contactMatchesBySocialProfile:(NSString *)arg1 bundleIdentifier:(NSString *)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)contactMatchesBySocialProfile:(SGSocialProfile *)arg1 error:(id *)arg2;
- (void)contactMatchesBySocialProfile:(SGSocialProfile *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)contactMatchesByEmailAddress:(NSString *)arg1 error:(id *)arg2;
- (void)contactMatchesByEmailAddress:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)contactMatchesByPhoneNumber:(NSString *)arg1 error:(id *)arg2;
- (void)contactMatchesByPhoneNumber:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)suggestContactMatchesWithMessagingPrefix:(NSString *)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestContactMatchesWithMessagingPrefix:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)suggestContactMatchesWithFullTextSearch:(NSString *)arg1 limitTo:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestContactMatchesWithFullTextSearch:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
@end

