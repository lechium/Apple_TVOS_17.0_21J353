//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol TVSPMarqueeable;

@protocol TVSPMarqueeableDelegate <NSObject>

@optional
- (void)marqueeableDidEndMarquee:(id <TVSPMarqueeable>)arg1;
- (void)marqueeableDidChangeMarqueeState:(id <TVSPMarqueeable>)arg1;
@end

