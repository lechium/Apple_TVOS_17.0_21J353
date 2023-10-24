//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MRDSystemEndpointEntry : NSObject
{
    _Bool _supportsIdleReset;	// 8 = 0x8
    NSString *_outputDeviceUID;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
    long long _event;	// 40 = 0x28
    NSString *_eventReason;	// 48 = 0x30
    NSString *_selectionReason;	// 56 = 0x38
    long long _changeType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000032a6
@property(nonatomic) _Bool supportsIdleReset; // @synthesize supportsIdleReset=_supportsIdleReset;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(retain, nonatomic) NSString *selectionReason; // @synthesize selectionReason=_selectionReason;
@property(retain, nonatomic) NSString *eventReason; // @synthesize eventReason=_eventReason;
@property(nonatomic) long long event; // @synthesize event=_event;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
- (id)description;	// IMP=0x00100000000030a8

@end

