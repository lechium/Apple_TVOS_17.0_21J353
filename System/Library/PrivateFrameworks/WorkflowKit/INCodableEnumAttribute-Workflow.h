//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableEnumAttribute.h>

@interface INCodableEnumAttribute (Workflow)
- (id)wf_contentItemForValue:(id)arg1;	// IMP=0x00700000000ea22f
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;	// IMP=0x00700000000e9e25
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 parameterState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00700000000e9b2c
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2 localizer:(id)arg3;	// IMP=0x00700000000e93ac
- (Class)wf_parameterClass;	// IMP=0x00700000000e933e
- (id)wf_outputDisplayNameWithLocalizer:(id)arg1;	// IMP=0x00700000000e92c4
- (Class)wf_objectClass;	// IMP=0x00700000000e924f
@end
