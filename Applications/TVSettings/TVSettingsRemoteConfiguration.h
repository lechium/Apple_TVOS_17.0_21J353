//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, PBSVolumeButtonConfiguration;

@interface TVSettingsRemoteConfiguration : NSObject
{
    _Bool _isSelected;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSString *_displayDescription;	// 32 = 0x20
    NSUUID *_UUID;	// 40 = 0x28
    NSString *_deviceName;	// 48 = 0x30
    long long _configurationType;	// 56 = 0x38
    PBSVolumeButtonConfiguration *_underlyingConfiguration;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000fcc88
@property(readonly, nonatomic) PBSVolumeButtonConfiguration *underlyingConfiguration; // @synthesize underlyingConfiguration=_underlyingConfiguration;
@property(readonly, nonatomic) long long configurationType; // @synthesize configurationType=_configurationType;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) NSString *displayDescription; // @synthesize displayDescription=_displayDescription;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)succinctDescriptionBuilder;	// IMP=0x00100000000fcc25
- (id)succinctDescription;	// IMP=0x00100000000fcbd5
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000fcb85
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000fc99b
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000fc5a5
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 displayName:(id)arg3 displayDescription:(id)arg4 isSelected:(_Bool)arg5 underlyingConfiguration:(id)arg6;	// IMP=0x00100000000fc394
- (id)initWithDisplayName:(id)arg1 displayDescription:(id)arg2 isSelected:(_Bool)arg3 underlyingConfiguration:(id)arg4;	// IMP=0x00100000000fc2b5

// Remaining properties
@property(readonly) Class superclass;

@end

