//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol AMSDXPCActivityDefinition;

@protocol AMSDXPCActivitySchedulerProtocol
- (void)scheduleIfNeededActivity:(id <AMSDXPCActivityDefinition>)arg1;
- (void)removeActivity:(NSString *)arg1;
@end

