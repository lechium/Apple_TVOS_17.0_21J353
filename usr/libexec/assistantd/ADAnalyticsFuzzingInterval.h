//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADAnalyticsFuzzingInterval : NSObject
{
    unsigned long long _startTime;	// 8 = 0x8
    NSString *_streamUID;	// 16 = 0x10
    long long _offset;	// 24 = 0x18
    unsigned long long _endTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001d0b32
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
@property(readonly, copy, nonatomic) NSString *streamUID; // @synthesize streamUID=_streamUID;
@property(readonly, nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
- (id)initWithStartTime:(unsigned long long)arg1;	// IMP=0x00100000001d0a53

@end

