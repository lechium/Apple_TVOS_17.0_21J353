//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/RWIProtocolDOMNode.h>

@interface RWIProtocolDOMNode (IKJSInspector)
+ (id)ik_nodeFromDOMNode:(id)arg1;	// IMP=0x0050000000017366
+ (id)ik_nodeFromDOMNode:(id)arg1 depth:(int)arg2;	// IMP=0x005000000001715b
+ (id)safe_initWithNodeId:(int)arg1 nodeType:(int)arg2 nodeName:(id)arg3 localName:(id)arg4 nodeValue:(id)arg5;	// IMP=0x00500000000cd1c8
- (void)ik_updateWithDOMNode:(id)arg1 fullfillChildren:(_Bool)arg2 dispatcher:(id)arg3;	// IMP=0x001000000001818f
- (void)ik_updateWithDOMNode:(id)arg1 dispatcher:(id)arg2;	// IMP=0x0010000000018178
- (id)ik_nodeWithNodeId:(int)arg1;	// IMP=0x0010000000017fe4
- (id)ik_description;	// IMP=0x0010000000017f15
- (void)ik_insertChild:(id)arg1 before:(id)arg2;	// IMP=0x0010000000017da2
- (void)ik_removeChildWithId:(int)arg1;	// IMP=0x0010000000017c8b
- (void)ik_removeAttributeNamed:(id)arg1;	// IMP=0x0010000000017b61
- (void)ik_setAttributeValue:(id)arg1 name:(id)arg2;	// IMP=0x0010000000017902
- (id)ik_attributesDictionary;	// IMP=0x001000000001779d
@end

