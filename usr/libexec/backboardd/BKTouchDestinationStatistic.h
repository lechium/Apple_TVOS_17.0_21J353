//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface BKTouchDestinationStatistic
{
    NSMutableDictionary *_statsPerDestination;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000006b07d
@property(retain, nonatomic) NSMutableDictionary *statsPerDestination; // @synthesize statsPerDestination=_statsPerDestination;
- (void)reset;	// IMP=0x001000000006b00e
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000006af35
- (void)addDestination:(id)arg1 touchIdentifier:(unsigned int)arg2;	// IMP=0x001000000006ad7d

@end

