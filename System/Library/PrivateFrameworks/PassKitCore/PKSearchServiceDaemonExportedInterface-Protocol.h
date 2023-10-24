//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSString, PKSearchQuery;

@protocol PKSearchServiceDaemonExportedInterface <PDXPCServiceExportedInterface>
- (void)transactionsMissingRegionsWithCompletion:(void (^)(NSSet *, NSDictionary *))arg1;
- (void)regionsWithCompletion:(void (^)(NSSet *))arg1;
- (void)resetRegionsCoordinatesWithCompletion:(void (^)(void))arg1;
- (void)resetRegionsWithCompletion:(void (^)(void))arg1;
- (void)updateRegionWithIdentifier:(NSString *)arg1 localizedName:(NSString *)arg2 boundingRegion:(CDStruct_2b0c6e0b)arg3 mapsIdentifier:(unsigned long long)arg4 providerIdentifier:(int)arg5 completion:(void (^)(PKWorldRegion *))arg6;
- (void)cancelQueryWithIdentifier:(NSString *)arg1;
- (void)searchWithQuery:(PKSearchQuery *)arg1;
- (void)hasSearchableContentForQuery:(PKSearchQuery *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)canProvideFullResultsWithCompletion:(void (^)(_Bool))arg1;
@end

