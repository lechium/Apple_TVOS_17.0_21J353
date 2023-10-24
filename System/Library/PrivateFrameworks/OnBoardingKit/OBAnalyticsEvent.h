//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OBAnalyticsEvent : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSDictionary *_payload;	// 16 = 0x10
}

+ (id)eventWithName:(id)arg1 withPayload:(id)arg2;	// IMP=0x0060000000008d1f
- (void).cxx_destruct;	// IMP=0x0000000000008e74
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000008dab

@end

