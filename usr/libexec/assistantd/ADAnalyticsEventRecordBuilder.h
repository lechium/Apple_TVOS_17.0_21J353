//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SiriCoreSQLiteValue;

@interface ADAnalyticsEventRecordBuilder : NSObject
{
    id <SiriCoreSQLiteValue> _streamUIDValue;	// 8 = 0x8
    id <SiriCoreSQLiteValue> _deliveryStreamValue;	// 16 = 0x10
    id <SiriCoreSQLiteValue> _typeValue;	// 24 = 0x18
    id <SiriCoreSQLiteValue> _timestampValue;	// 32 = 0x20
    id <SiriCoreSQLiteValue> _contextDataValue;	// 40 = 0x28
    id <SiriCoreSQLiteValue> _contextDataTypeValue;	// 48 = 0x30
    id <SiriCoreSQLiteValue> _dateCreatedValue;	// 56 = 0x38
    id <SiriCoreSQLiteValue> _speechIdValue;	// 64 = 0x40
    id <SiriCoreSQLiteValue> _recordIdValue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001296fd
- (id)build;	// IMP=0x00100000001294bf
- (void)setValue:(id)arg1 forColumnName:(id)arg2;	// IMP=0x001000000012934b
- (void)reset;	// IMP=0x00100000001292c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

