//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@class WFContentCollection;

__attribute__((visibility("hidden")))
@interface WFShowPasswordsAction : WFAction
{
}

- (void).cxx_destruct;	// IMP=0x000000000002ea30
- (id)init;	// IMP=0x000000000002e9d0
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;	// IMP=0x000000000002e920
- (void)runWithInput:(WFContentCollection *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x000000000002e200

@end
