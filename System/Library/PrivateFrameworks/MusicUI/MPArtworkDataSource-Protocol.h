//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicUI/NSObject-Protocol.h>

@class MPArtworkCatalog, MPArtworkRepresentation, NSDictionary;
@protocol MPArtworkDataSourceVisualIdenticality;

@protocol MPArtworkDataSource <NSObject>
- (id <MPArtworkDataSourceVisualIdenticality>)visualIdenticalityIdentifierForCatalog:(MPArtworkCatalog *)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (void)loadRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1 completionHandler:(void (^)(MPArtworkRepresentation *, NSError *))arg2;
- (MPArtworkRepresentation *)existingRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (_Bool)isRepresentation:(MPArtworkRepresentation *)arg1 bestRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg2;
- (_Bool)areRepresentationsAvailableForCatalog:(MPArtworkCatalog *)arg1;

@optional
- (void)loadRepresentationOfKind:(long long)arg1 forArtworkCatalog:(MPArtworkCatalog *)arg2 completionHandler:(void (^)(MPArtworkRepresentation *, NSError *))arg3;
- (MPArtworkRepresentation *)existingRepresentationOfKind:(long long)arg1 forArtworkCatalog:(MPArtworkCatalog *)arg2;
- (_Bool)areRepresentationsOfKind:(long long)arg1 availableForCatalog:(MPArtworkCatalog *)arg2;
- (void)getExportableArtworkPropertiesForCatalog:(MPArtworkCatalog *)arg1 completionHandler:(void (^)(MPExportableArtworkProperties *, NSError *))arg2;
- (_Bool)hasExportableArtworkPropertiesForCatalog:(MPArtworkCatalog *)arg1;
- (_Bool)hasExistingRepresentationOnDiskForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(MPArtworkCatalog *)arg2 options:(NSDictionary *)arg3 systemEffectHandler:(void (^)(void (^)(id, NSError *)))arg4 completionHandler:(void (^)(id, NSError *))arg5;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(MPArtworkCatalog *)arg2 options:(NSDictionary *)arg3;
@end

