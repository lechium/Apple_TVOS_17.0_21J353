//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBSessionRequester.h>

@interface CLALSRequester : PBSessionRequester
{
    int tag;	// 252 = 0xfc
    int type;	// 256 = 0x100
    double timestamp;	// 264 = 0x108
    _Bool processingCellTowers;	// 272 = 0x110
    _Bool processingWirelessAPs;	// 273 = 0x111
    _Bool finished;	// 274 = 0x112
}

@property _Bool finished; // @synthesize finished;
@property _Bool processingWirelessAPs; // @synthesize processingWirelessAPs;
@property _Bool processingCellTowers; // @synthesize processingCellTowers;
@property double timestamp; // @synthesize timestamp;
@property int type; // @synthesize type;
@property int tag; // @synthesize tag;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000996e22

@end

