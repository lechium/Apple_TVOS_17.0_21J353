//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKDContainerServerInfo, NSString;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest
{
    _Bool _requireUserIDs;	// 8 = 0x8
    NSString *_containerIdentifier;	// 16 = 0x10
    CKDContainerServerInfo *_containerServerInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000124e57
@property(copy, nonatomic) CKDContainerServerInfo *containerServerInfo; // @synthesize containerServerInfo=_containerServerInfo;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(nonatomic) _Bool requireUserIDs; // @synthesize requireUserIDs=_requireUserIDs;
- (void)requestDidParseJSONObject:(id)arg1;	// IMP=0x0000000000123e59
- (_Bool)hasRequestBody;	// IMP=0x0000000000123e51
- (id)url;	// IMP=0x0000000000123c04
- (long long)partitionType;	// IMP=0x0000000000123bf9
- (long long)serverType;	// IMP=0x0000000000123bee
- (_Bool)usesiCloudAuthToken;	// IMP=0x0000000000123be6
- (_Bool)usesCloudKitAuthToken;	// IMP=0x0000000000123bde
- (_Bool)allowsAuthedAccount;	// IMP=0x0000000000123bd6
- (_Bool)allowsAnonymousAccount;	// IMP=0x0000000000123bc1
- (_Bool)requiresDeviceID;	// IMP=0x0000000000123bb9
- (_Bool)requiresConfiguration;	// IMP=0x0000000000123bb1
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x0000000000123b16
- (id)initWithOperation:(id)arg1 containerIdentifier:(id)arg2;	// IMP=0x0000000000123a9e

@end
