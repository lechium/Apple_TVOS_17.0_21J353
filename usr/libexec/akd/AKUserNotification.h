//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AKUserNotification : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_titleKey;	// 16 = 0x10
    NSString *_subTitleKey;	// 24 = 0x18
    NSString *_bodyKey;	// 32 = 0x20
    NSString *_actionButtonText;	// 40 = 0x28
    NSString *_otherButtonText;	// 48 = 0x30
    NSString *_localizedAppsNameList;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000974ee
@property(copy, nonatomic) NSString *localizedAppsNameList; // @synthesize localizedAppsNameList=_localizedAppsNameList;
@property(copy, nonatomic) NSString *otherButtonText; // @synthesize otherButtonText=_otherButtonText;
@property(copy, nonatomic) NSString *actionButtonText; // @synthesize actionButtonText=_actionButtonText;
@property(copy, nonatomic) NSString *bodyKey; // @synthesize bodyKey=_bodyKey;
@property(copy, nonatomic) NSString *subTitleKey; // @synthesize subTitleKey=_subTitleKey;
@property(copy, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00100000000973ac
- (id)initWithPushMessage:(id)arg1;	// IMP=0x001000000009727d

@end

