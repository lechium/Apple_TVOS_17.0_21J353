//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MRDiscoveredGroupSession;
@protocol MRDGroupSessionListener;

@protocol MRDGroupSessionListenerDelegate <NSObject>
- (void)listener:(id <MRDGroupSessionListener>)arg1 didLoseSession:(MRDiscoveredGroupSession *)arg2;
- (void)listener:(id <MRDGroupSessionListener>)arg1 didDiscoverSession:(MRDiscoveredGroupSession *)arg2;
@end

