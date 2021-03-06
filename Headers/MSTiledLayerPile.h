//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSTilePlacerDelegate.h"
#import "MSTiledLayerDelegate.h"

@class NSArray, NSMutableArray, NSString, NSView<MSTiledLayerPileHostView>;

@interface MSTiledLayerPile : NSObject <MSTiledLayerDelegate, MSTilePlacerDelegate>
{
    BOOL _shouldHideOverlayControls;
    id <MSRenderingContextCacheProvider> _renderingCacheProvider;
    NSView<MSTiledLayerPileHostView> *_hostView;
    NSMutableArray *_tiledLayers;
}

@property(retain, nonatomic) NSMutableArray *tiledLayers; // @synthesize tiledLayers=_tiledLayers;
@property(readonly, nonatomic) __weak NSView<MSTiledLayerPileHostView> *hostView; // @synthesize hostView=_hostView;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> renderingCacheProvider; // @synthesize renderingCacheProvider=_renderingCacheProvider;
@property(nonatomic) BOOL shouldHideOverlayControls; // @synthesize shouldHideOverlayControls=_shouldHideOverlayControls;
- (void).cxx_destruct;
- (void)tilePlacer:(id)arg1 renderOverlayInRect:(struct CGRect)arg2;
- (void)tilePlacer:(id)arg1 requiresRedrawInRect:(struct CGRect)arg2;
- (void)tiledLayer:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)refreshContentRect:(struct CGRect)arg1 forPage:(id)arg2;
- (void)refreshOverlayForPage:(id)arg1;
- (void)refreshOverlayRect:(struct CGRect)arg1 forPage:(id)arg2;
- (void)tile;
- (void)adaptToPixelGridChange;
@property(readonly, nonatomic) NSArray *renderingTiles;
- (void)zoomBy:(double)arg1 centeredOnViewPoint:(struct CGPoint)arg2;
@property(readonly, nonatomic) double zoomValue;
- (void)scrollBy:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGPoint scrollOrigin;
- (void)clearAllSupercededTiledLayers;
- (void)removeObsoleteTiledLayers;
@property(readonly, nonatomic) NSArray *supercededTiledLayers;
- (id)currentTiledLayer;
- (id)prepareNewTiledLayerWithZoomValue:(double)arg1 scrollOrigin:(struct CGPoint)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithHostView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

