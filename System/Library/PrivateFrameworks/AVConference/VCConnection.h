//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VCConnection : NSObject
{
    unsigned short _linkFlags;	// 8 = 0x8
    unsigned short _remoteLinkFlags;	// 10 = 0xa
    unsigned long long _constantConnectionOverhead;	// 16 = 0x10
    unsigned char _connectionType;	// 24 = 0x18
    int _priority;	// 28 = 0x1c
    struct tagVCConnectionProtocolRealtimeVTable _vTable;	// 32 = 0x20
    NSDictionary *_connectionSelectionPriorities;	// 224 = 0xe0
}

- (id)getConnectionSelectionPriorities;	// IMP=0x0000000000135eb2
- (long long)compareIpVersionPriority:(id)arg1 selectionPolicy:(CDStruct_155bd25f *)arg2;	// IMP=0x0000000000135d03
- (long long)compareE2EPriority:(id)arg1 selectionPolicy:(CDStruct_155bd25f *)arg2;	// IMP=0x0000000000135bcc
- (long long)compareVpnPriority:(id)arg1 selectionPolicy:(CDStruct_155bd25f *)arg2;	// IMP=0x0000000000135b55
- (long long)compareConnectionTypePriority:(id)arg1 selectionPolicy:(CDStruct_155bd25f *)arg2;	// IMP=0x00000000001359a7
- (long long)compareInterfacePriority:(id)arg1 isPrimary:(_Bool)arg2;	// IMP=0x00000000001355f3
- (long long)compare:(id)arg1 isPrimary:(_Bool)arg2 selectionPolicy:(CDStruct_155bd25f *)arg3;	// IMP=0x00000000001353ae
- (void)setRemoteLinkFlags:(unsigned short)arg1;	// IMP=0x00000000001352d5
- (void)setLinkFlags:(unsigned short)arg1;	// IMP=0x00000000001351fc
- (void)dealloc;	// IMP=0x000000000013519b
- (id)init;	// IMP=0x0000000000135107
- (void)setUpVTable;	// IMP=0x00000000001350a6

@end

