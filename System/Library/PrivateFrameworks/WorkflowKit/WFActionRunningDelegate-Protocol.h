//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFActionParameterInputProvider-Protocol.h>

@class NSXPCListenerEndpoint, WFAction, WFActionTestingEvent, WFContentItemCache, WFControlFlowAttributionTracker, WFSmartPromptsExfiltrationLogger, WFWorkflowRunningContext;
@protocol WFActionReversalState;

@protocol WFActionRunningDelegate <WFActionParameterInputProvider>

@optional
- (void)action:(WFAction *)arg1 handleTestingEvent:(WFActionTestingEvent *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (_Bool)isTesting;
- (_Bool)shouldDisablePrivacyPrompts;
- (WFSmartPromptsExfiltrationLogger *)exfiltrationLogger;
- (WFControlFlowAttributionTracker *)flowTracker;
- (WFContentItemCache *)contentItemCache;
- (void)action:(WFAction *)arg1 didGenerateReversalState:(id <WFActionReversalState>)arg2;
- (id <WFActionReversalState>)actionReversalStateForAction:(WFAction *)arg1;
- (void)action:(WFAction *)arg1 didDecideRunningProgressIsAllowed:(_Bool)arg2;
- (NSXPCListenerEndpoint *)remoteDialogPresenterEndpointForRunWorkflowAction:(WFAction *)arg1;
- (WFWorkflowRunningContext *)currentRunningContextForAction:(WFAction *)arg1;
@end

