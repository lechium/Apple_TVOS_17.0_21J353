//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OSLogEventStreamPosition;

@interface DTOSLogLoaderFetchTicket
{
    double _windowInSeconds;	// 8 = 0x8
    OSLogEventStreamPosition *_currentPosition;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000022370
@property(retain, nonatomic) OSLogEventStreamPosition *currentPosition; // @synthesize currentPosition=_currentPosition;
@property(nonatomic) double windowInSeconds; // @synthesize windowInSeconds=_windowInSeconds;
- (void)prepareAgent:(id)arg1 loader:(id)arg2;	// IMP=0x0000000000021ff5
- (void)holdAgent:(id)arg1 loader:(id)arg2;	// IMP=0x000000000002153f

@end
