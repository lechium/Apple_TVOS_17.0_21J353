//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSAudioConverter, NSArray;

@protocol CSAudioConverterDelegate <NSObject>
- (void)audioConverterDidConvertPackets:(CSAudioConverter *)arg1 packets:(NSArray *)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5;
@end
