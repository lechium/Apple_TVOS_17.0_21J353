//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentityMinimal, NSString;

@protocol MCMAllows
- (_Bool)isAllowedToChangeReferences;
- (_Bool)isAllowedToReadReferences;
- (_Bool)isAllowedToAccessUserAssets;
- (_Bool)isAllowedToStageSharedContent;
- (_Bool)isAllowedToStartUserDataMigration;
- (_Bool)isAllowedToStartDataMigration;
- (_Bool)isAllowedToRestoreContainer;
- (_Bool)isAllowedToSetDataProtection;
- (_Bool)isAllowedToAccessCodesignMapping;
- (_Bool)isAllowedToTest;
- (_Bool)isAllowedToWipeAnyDataContainer;
- (_Bool)isAllowedToDelete;
- (_Bool)isAllowedToRegenerateDirectoryUUIDs;
- (_Bool)isAllowedToRecreateContainerStructure;
- (_Bool)isAllowedToAccessInfoMetadata;
- (_Bool)isAllowedToReplaceContainers;
- (_Bool)isAllowedToControlCaches;
- (_Bool)isAllowedToWipePlugInDataContainerWithIdentifier:(NSString *)arg1;
- (_Bool)isAllowedToLookupViaPrivateEntitlementWithClass:(unsigned long long)arg1 identifier:(NSString *)arg2;
- (_Bool)isAllowedToLookupGroupContainersOfClass:(unsigned long long)arg1 ownedByIdentifier:(NSString *)arg2;
- (_Bool)isAllowedToLookupContainerIdentity:(MCMContainerIdentityMinimal *)arg1;
- (_Bool)isAllowedToLookupAllContainersOfClass:(unsigned long long)arg1;
@end

