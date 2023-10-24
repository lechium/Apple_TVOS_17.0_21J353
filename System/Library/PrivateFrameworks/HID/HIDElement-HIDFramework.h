//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IOKit/HIDElement.h>

@class NSArray, NSData;

@interface HIDElement (HIDFramework)
@property(readonly) unsigned long long timestamp;
@property(readonly) long long physicalMax;
@property(readonly) long long physicalMin;
@property(readonly) long long logicalMax;
@property(readonly) long long logicalMin;
@property(readonly) long long unitExponent;
@property(readonly) long long unit;
@property(readonly) long long reportSize;
@property(readonly) long long reportID;
@property(readonly) long long usage;
@property(readonly) long long usagePage;
@property(readonly) long long type;
@property(readonly) NSArray *children;
@property(readonly) HIDElement *parent;
@property NSData *dataValue;
@property long long integerValue;
- (double)scaleValue:(long long)arg1;	// IMP=0x00300000000050c3
- (unsigned int)cookie;	// IMP=0x00300000000050b9
- (void)setValueRef:(struct __IOHIDValue *)arg1;	// IMP=0x00300000000050ac
- (struct __IOHIDValue *)valueRef;	// IMP=0x00300000000050a2
- (id)description;	// IMP=0x0030000000004fe3
@end

