//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class NSSet;
@protocol __BKSHIDEventDeferringResolution__;

@protocol BKSHIDEventObserverClientInterface <NSObject>
- (oneway void)didUpdateDeferringResolutions:(NSSet<__BKSHIDEventDeferringResolution__> *)arg1;
@end

