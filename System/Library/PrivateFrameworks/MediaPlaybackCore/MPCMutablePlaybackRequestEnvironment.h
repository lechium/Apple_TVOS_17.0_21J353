//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICUserIdentity, MPCPlaybackDelegationProperties, NSString;

__attribute__((visibility("hidden")))
@interface MPCMutablePlaybackRequestEnvironment
{
}

@property(retain, nonatomic) ICUserIdentity *userIdentity; // @dynamic userIdentity;
@property(copy, nonatomic) NSString *requestingBundleVersion; // @dynamic requestingBundleVersion;
@property(copy, nonatomic) NSString *requestingBundleIdentifier; // @dynamic requestingBundleIdentifier;
@property(copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties; // @dynamic delegationProperties;
@property(copy, nonatomic) NSString *clientVersion; // @dynamic clientVersion;
@property(copy, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d0c0d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d0bdf

@end

