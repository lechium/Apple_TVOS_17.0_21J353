//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class HMDUser, HMFMessage, NSArray, NSString;

@interface NSCoder (RemoteTransport)
@property(readonly, copy) NSArray *hmd_supportedFeatures;
@property(readonly) long long hmd_dataVersion;
@property(readonly, getter=hmd_isForSharedUser) _Bool hmd_forSharedUser;
@property(readonly) HMDUser *hmd_user;
@property(readonly, getter=hmd_isForNonAdminSharedUser) _Bool hmd_forNonAdminSharedUser;
@property(readonly, getter=hmd_isForRemoteUserAdministrator) _Bool hmd_forRemoteUserAdministrator;
@property(readonly, getter=hmd_isForRemoteGatewayCoder) _Bool hmd_forRemoteGatewayCoder;
@property(readonly, getter=hmd_isForRemoteTransportOnSameAccount) _Bool hmd_forRemoteTransportOnSameAccount;
@property(readonly, getter=hmd_isForRemoteTransport) _Bool hmd_forRemoteTransport;
@property(readonly, getter=hmd_isForLocalStore) _Bool hmd_forLocalStore;
- (_Bool)hmd_isHH2MigrationInProgress;	// IMP=0x0030000000a5c213
@property(readonly, getter=hmd_isForXPCTransportEntitledForHomeLocationFeedbackAccess) _Bool hmd_isForXPCTransportEntitledForHomeLocationFeedbackAccess;
@property(readonly, getter=hmd_isForXPCTransportEntitledForAssistantIdentifiers) _Bool hmd_forXPCTransportEntitledForAssistantIdentifiers;
@property(readonly, getter=hmd_isForXPCTransportEntitledForHomeLocationAccess) _Bool hmd_forXPCTransportEntitledForHomeLocationAccess;
@property(readonly, getter=hmd_isForXPCTransportAuthorizedForLocationAccess) _Bool hmd_forXPCTransportAuthorizedForLocationAccess;
@property(readonly, getter=hmd_isForXPCTransportEntitledForSPIAccess) _Bool hmd_forXPCTransportEntitledForSPIAccess;
@property(readonly, copy) NSString *hmd_applicationBundleIdentifier;
@property(readonly) unsigned long long hmd_entitlements;
@property(readonly) unsigned long long hmd_homeManagerOptions;
@property(readonly) HMFMessage *hmd_message;
@property(readonly, getter=hmd_isForXPCTransport) _Bool hmd_forXPCTransport;
@end

