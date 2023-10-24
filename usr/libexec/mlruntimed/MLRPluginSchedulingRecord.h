//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESUserDefaultsStoreRecord, NSDate, NSString;

@interface MLRPluginSchedulingRecord : NSObject
{
    DESUserDefaultsStoreRecord *_storeRecord;	// 8 = 0x8
    NSDate *_lastCompletionDate;	// 16 = 0x10
    NSString *_recordID;	// 24 = 0x18
    unsigned long long _periodInSeconds;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000bff2
@property(nonatomic) unsigned long long periodInSeconds; // @synthesize periodInSeconds=_periodInSeconds;
@property(readonly, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSDate *lastCompletionDate; // @synthesize lastCompletionDate=_lastCompletionDate;
- (_Bool)commitWithError:(id *)arg1;	// IMP=0x001000000000be85
- (id)description;	// IMP=0x001000000000be07
- (id)initWithPluginID:(id)arg1;	// IMP=0x001000000000bca0

@end

