//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/PBSAppInfo.h>

@class FBSSceneIdentity, NSString, PBApplicationInfo, PBApplicationPlaceholder;

@interface PBAppInfo : PBSAppInfo
{
    PBApplicationInfo *_applicationInfo;	// 8 = 0x8
    PBApplicationPlaceholder *_applicationPlaceholder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00100000000eac10
@property(readonly, nonatomic) PBApplicationPlaceholder *applicationPlaceholder; // @synthesize applicationPlaceholder=_applicationPlaceholder;
@property(readonly, nonatomic) PBApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
- (_Bool)isPBAppInfo;	// IMP=0x00100000000eabe6
- (Class)classForCoder;	// IMP=0x00100000000eabc4
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000eab8d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000eab81
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ea823
- (id)initWithAppInfo:(id)arg1;	// IMP=0x00100000000ea753
- (id)initWithApplicationPlaceholder:(id)arg1;	// IMP=0x00100000000ea6d5
- (id)initWithApplicationInfo:(id)arg1;	// IMP=0x00100000000ea657
@property(readonly, nonatomic) FBSSceneIdentity *defaultSceneIdentity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

