//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCDatagramChannelIDS, VCEmulatedNetwork;

__attribute__((visibility("hidden")))
@interface VCDatagramChannelIDSEmulated
{
    long long _mode;	// 128 = 0x80
    VCDatagramChannelIDS *_idsChannel;	// 136 = 0x88
    VCEmulatedNetwork *_network;	// 144 = 0x90
    int _packetCount;	// 152 = 0x98
    _Bool _isStarted;	// 156 = 0x9c
}

- (void)setOneToOneModeEnabled:(_Bool)arg1 isInitiator:(_Bool)arg2;	// IMP=0x000000000015287e
- (int)dataPath;	// IMP=0x0000000000152861
- (id)destination;	// IMP=0x0000000000152844
- (unsigned int)token;	// IMP=0x000000000015282f
- (id)defaultLink;	// IMP=0x0000000000152812
- (id)connectedLinks;	// IMP=0x00000000001527f5
- (void)osChannelInfoLog;	// IMP=0x00000000001527d8
- (void)readyToRead;	// IMP=0x00000000001527bb
- (void)setReadHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000015279e
- (void)invalidate;	// IMP=0x0000000000152701
- (int)start;	// IMP=0x000000000015265b
- (void)setupEmulatedNetwork;	// IMP=0x0000000000152317
- (void)optOutStreamIDs:(id)arg1;	// IMP=0x00000000001522fa
- (void)optInStreamIDs:(id)arg1;	// IMP=0x00000000001522dd
- (void)requestSessionInfoWithOptions:(id)arg1;	// IMP=0x00000000001522c0
- (void)setWiFiAssist:(_Bool)arg1;	// IMP=0x00000000001522a3
- (void)setChannelPreferences:(id)arg1;	// IMP=0x0000000000152286
- (void)setEventHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000152269
- (void)writeDatagrams:(const void **)arg1 datagramsSize:(unsigned int *)arg2 datagramsInfo:(CDStruct_cae94949 *)arg3 datagramsCount:(int)arg4 options:(struct **)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000015206c
- (_Bool)writeToEmulatedNetworkWithDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_cae94949)arg3 options:(CDStruct_9bf45fcd *)arg4;	// IMP=0x0000000000151db5
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_cae94949)arg3 options:(CDStruct_9bf45fcd *)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000151bf9
- (void)dealloc;	// IMP=0x0000000000151aa1
- (id)initWithIDSDatagramChannel:(id)arg1 mode:(long long)arg2;	// IMP=0x000000000015196d

@end
