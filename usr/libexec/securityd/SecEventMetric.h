//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SecEventMetric : NSObject
{
    NSString *_eventName;	// 8 = 0x8
    NSMutableDictionary *_attributes;	// 16 = 0x10
}

+ (id)supportedAttributeClasses;	// IMP=0x00200000001cca6c
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001cca64
- (void).cxx_destruct;	// IMP=0x00200000001cc7b4
@property(retain) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain) NSString *eventName; // @synthesize eventName=_eventName;
- (id)generateError:(id)arg1;	// IMP=0x00100000001cc5b8
- (id)genericEvent;	// IMP=0x00100000001cc483
- (unsigned long long)convertTimeIntervalToServerTime:(double)arg1;	// IMP=0x00100000001cc44e
- (void)setMetricValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000001cc43c
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00100000001cc1ae
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001cc100
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001cbf96
- (id)initWithEventName:(id)arg1;	// IMP=0x00100000001cbeda

@end

