//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, TVNPRoutingDestination, UIImage;

@interface TVNPRoute : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_routeUID;	// 16 = 0x10
    NSString *_groupUID;	// 24 = 0x18
    UIImage *_deviceImage;	// 32 = 0x20
    unsigned long long _deviceType;	// 40 = 0x28
    _Bool _local;	// 48 = 0x30
    _Bool _canBeGrouped;	// 49 = 0x31
    unsigned long long _selectionState;	// 56 = 0x38
    NSNumber *_volumeLevel;	// 64 = 0x40
    _Bool _muted;	// 72 = 0x48
    TVNPRoutingDestination *_destination;	// 80 = 0x50
    _Bool _silentPrimary;	// 88 = 0x58
    _Bool _available;	// 89 = 0x59
    NSString *_deviceTypeDescription;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000001d6f0
@property(nonatomic, getter=isSilentPrimary) _Bool silentPrimary; // @synthesize silentPrimary=_silentPrimary;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) TVNPRoutingDestination *destination; // @synthesize destination=_destination;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(copy, nonatomic) NSNumber *volumeLevel; // @synthesize volumeLevel=_volumeLevel;
@property(nonatomic) _Bool canBeGrouped; // @synthesize canBeGrouped=_canBeGrouped;
@property(nonatomic) unsigned long long selectionState; // @synthesize selectionState=_selectionState;
@property(nonatomic, getter=isLocal) _Bool local; // @synthesize local=_local;
@property(readonly, copy, nonatomic) NSString *deviceTypeDescription; // @synthesize deviceTypeDescription=_deviceTypeDescription;
@property(nonatomic) unsigned long long deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) UIImage *deviceImage; // @synthesize deviceImage=_deviceImage;
@property(copy, nonatomic) NSString *groupUID; // @synthesize groupUID=_groupUID;
@property(copy, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_init;	// IMP=0x001000000001d270
- (id)init;	// IMP=0x001000000001d240

@end

