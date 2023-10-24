//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GKBulletinAction : NSObject
{
    _Bool _isDestructive;	// 8 = 0x8
    _Bool _inAlertView;	// 9 = 0x9
    _Bool _inBannerView;	// 10 = 0xa
    long long _type;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_info;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000190ab0
- (void).cxx_destruct;	// IMP=0x0020000000190f39
@property _Bool inBannerView; // @synthesize inBannerView=_inBannerView;
@property _Bool inAlertView; // @synthesize inAlertView=_inAlertView;
@property _Bool isDestructive; // @synthesize isDestructive=_isDestructive;
@property(retain) NSString *info; // @synthesize info=_info;
@property(retain) NSString *title; // @synthesize title=_title;
@property long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0010000000190d35
@property(readonly) NSDictionary *actionDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000190ab8
- (void);	// IMP=0x00100000001907a5
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000190473
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000001903af
- (id)init;	// IMP=0x0010000000190375

@end

