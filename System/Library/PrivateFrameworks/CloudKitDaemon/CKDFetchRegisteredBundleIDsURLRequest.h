//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest
{
    CDUnknownBlockType _bundleIDsFetchedBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000321a3
@property(copy, nonatomic) CDUnknownBlockType bundleIDsFetchedBlock; // @synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000000320d8
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000031fbf
- (id)generateRequestOperations;	// IMP=0x0000000000031de2
- (id)sourceApplicationSecondaryIdentifier;	// IMP=0x0000000000031dda
- (id)applicationBundleIdentifierForNetworkAttribution;	// IMP=0x0000000000031dcd
- (id)applicationBundleIdentifierForContainerAccess;	// IMP=0x0000000000031dc0
- (_Bool)requiresTokenRegistration;	// IMP=0x0000000000031db8
- (id)requestOperationClasses;	// IMP=0x0000000000031d4c
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x0000000000031d1d

@end
