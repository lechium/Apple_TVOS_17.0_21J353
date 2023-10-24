//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMMediaDestination;

@interface TVNPMediaDestinationRoute
{
    id <HMMediaDestination> _mediaDestination;	// 96 = 0x60
}

+ (id)_imageForMediaDestination:(id)arg1;	// IMP=0x006000000002cca0
+ (_Bool)_availableStatusForMediaDestination:(id)arg1;	// IMP=0x006000000002c890
- (void).cxx_destruct;	// IMP=0x000000000002d160
@property(retain, nonatomic) id <HMMediaDestination> mediaDestination; // @synthesize mediaDestination=_mediaDestination;
- (void)updateWithMediaDestination:(id)arg1 selectionState:(unsigned long long)arg2;	// IMP=0x000000000002c5d0
- (id)description;	// IMP=0x000000000002c500
- (id)init;	// IMP=0x000000000002c490

@end

