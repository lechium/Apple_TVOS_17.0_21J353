//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIViewAnimationFrame : NSObject
{
    id _value;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    double _duration;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000013b9074
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (id)description;	// IMP=0x00000000013b8f9d
- (long long)compareStartTimes:(id)arg1;	// IMP=0x00000000013b8f75

@end

