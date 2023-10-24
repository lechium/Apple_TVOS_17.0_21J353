//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, UIImage;

@interface TVSSVideoEffect : NSObject
{
    _Bool _supported;	// 8 = 0x8
    _Bool _enabled;	// 9 = 0x9
    _Bool _unavailable;	// 10 = 0xa
    NSString *_identifier;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSString *_systemImageName;	// 32 = 0x20
    NSString *_enabledSystemImageName;	// 40 = 0x28
    long long _controlMode;	// 48 = 0x30
}

+ (id)effectForAVEffect:(id)arg1 cameraAppBundleID:(id)arg2 displayName:(id)arg3 systemImageName:(id)arg4 enabledSystemImageName:(id)arg5 coordinator:(id)arg6;	// IMP=0x0020000000043710
+ (id)effectForAVEffect:(id)arg1 cameraAppBundleID:(id)arg2 displayName:(id)arg3 systemImageName:(id)arg4 coordinator:(id)arg5;	// IMP=0x00100000000435b0
- (void).cxx_destruct;	// IMP=0x00100000000448c0
@property(nonatomic) long long controlMode; // @synthesize controlMode=_controlMode;
@property(nonatomic, getter=isUnavailable) _Bool unavailable; // @synthesize unavailable=_unavailable;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSupported) _Bool supported; // @synthesize supported=_supported;
@property(readonly, nonatomic) NSString *enabledSystemImageName; // @synthesize enabledSystemImageName=_enabledSystemImageName;
@property(readonly, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000044500
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000043ba0
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 systemImageName:(id)arg3 enabledSystemImageName:(id)arg4 isEnabled:(_Bool)arg5 isSupported:(_Bool)arg6 isUnavailable:(_Bool)arg7 controlMode:(long long)arg8;	// IMP=0x0010000000043980
@property(nonatomic) _Bool contentIsDisabled;
@property(nonatomic) _Bool contentIsSelected;
@property(readonly, nonatomic) UIImage *contentImage;
@property(readonly, nonatomic) NSString *contentText1;
@property(readonly, nonatomic) NSString *contentTitle;

// Remaining properties
@property(readonly, nonatomic) NSArray *contentChildIdentifiers;
@property(readonly, nonatomic) UIImage *contentImage1;
@property(readonly, nonatomic) UIImage *contentImage2;
@property(readonly, nonatomic) UIImage *contentImage3;
@property(readonly, nonatomic) UIImage *contentImage4;
@property(retain, nonatomic) NSNumber *contentPercentage;
@property(readonly, nonatomic) NSString *contentText2;
@property(readonly, nonatomic) NSString *contentText3;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
