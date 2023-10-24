//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLClientKeyPath : NSObject
{
    char _buffer[0];	// 8 = 0x8
}

+ (id)clientKeyPathWithLegacyClientKey:(id)arg1;	// IMP=0x00200000009a18e5
+ (id)clientKeyPathWithClientKey:(id)arg1;	// IMP=0x00100000009a132c
+ (id)clientKeyPathFromName:(struct Name)arg1;	// IMP=0x00100000009a1246
+ (id)clientKeyPathFromName:(struct Name)arg1 subIdentityId:(id)arg2 subIdentityType:(BOOL)arg3;	// IMP=0x00100000009a1067
+ (id)clientKeyPathWithClientAnchor:(id)arg1 anchorType:(BOOL)arg2;	// IMP=0x00100000009a1033
+ (id)clientKeyPathWithClientAnchor:(id)arg1 anchorType:(BOOL)arg2 subIdentityId:(id)arg3 subIdentityType:(BOOL)arg4;	// IMP=0x00100000009a0fff
+ (id)clientKeyPathWithUserName:(id)arg1 clientAnchor:(id)arg2 anchorType:(BOOL)arg3;	// IMP=0x00100000009a0fd3
+ (id)clientKeyPathWithUserName:(id)arg1 clientAnchor:(id)arg2 anchorType:(BOOL)arg3 subIdentityId:(id)arg4 subIdentityType:(BOOL)arg5;	// IMP=0x001000000099f7d2
+ (id)nullClientKeyPath;	// IMP=0x001000000099f700
- (id)description;	// IMP=0x00200000009a36c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000009a368f
- (unsigned long long)hash;	// IMP=0x00100000009a3652
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000009a357f
@property(readonly) CLClientKeyPath *limitingCKP;
@property(readonly) _Bool isAuthLimited;
@property(readonly) _Bool isAuthSharingSubIdentity;
@property(readonly) NSString *nestedExecutablePath;
@property(readonly) NSString *nestedBundlePath;
@property(readonly) NSString *nestedBundleId;
@property(readonly) NSString *zoneId; // @dynamic zoneId;
@property(readonly) NSString *website; // @dynamic website;
@property(readonly) NSString *subIdentityIdWithType; // @dynamic subIdentityIdWithType;
@property(readonly) NSString *subIdentityId; // @dynamic subIdentityId;
@property(readonly) NSString *executablePath; // @dynamic executablePath;
@property(readonly) NSString *bundlePath; // @dynamic bundlePath;
@property(readonly) NSString *bundleId; // @dynamic bundleId;
@property(readonly) NSString *clientAnchorWithType; // @dynamic clientAnchorWithType;
@property(readonly) NSString *clientAnchor; // @dynamic clientAnchor;
@property(readonly) NSString *userName; // @dynamic userName;
@property(readonly) NSString *clientKey; // @dynamic clientKey;
@property(readonly) struct Name clientName; // @dynamic clientName;
@property(readonly) NSString *legacyClientKey; // @dynamic legacyClientKey;
@property(readonly) basic_string_d1f930f6 cppClientKey; // @dynamic cppClientKey;
@property(readonly) CLClientKeyPath *anchorKeyPath;
- (id)clientKeyPathWithReplacementTypedAnchor:(id)arg1;	// IMP=0x00100000009a23ac
- (id)clientKeyPathWithReplacementTypedSubIdentityId:(id)arg1;	// IMP=0x00100000009a22b3
- (id)clientKeyPathWithReplacementAnchor:(id)arg1 anchorType:(BOOL)arg2;	// IMP=0x00100000009a1f45
- (id)clientKeyPathWithReplacementSubIdentityId:(id)arg1 subIdentityType:(BOOL)arg2;	// IMP=0x00100000009a1bb7
@property(readonly) _Bool isValidCKP;
- (id)extractComponentFromCharPtr:(char *)arg1;	// IMP=0x001000000099f691
- (char *)findComponent:(int)arg1;	// IMP=0x001000000099f4b4

@end

