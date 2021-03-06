//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableLayer.h"

#import "MSLayer.h"
#import "MSLayerContainment.h"
#import "MSLayerTraits.h"

@class MSImmutableStyle, NSAffineTransform, NSArray, NSDictionary, NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableLayer : _MSImmutableLayer <MSLayerContainment, MSLayer, MSLayerTraits>
{
    BOOL _hasBlendedLayer;
    unsigned long long _traits;
    struct CGRect _influenceRectForBounds;
    struct CGRect _overlayInfluenceRectForBounds;
}

+ (unsigned long long)traits;
+ (id)defaultName;
@property(readonly, nonatomic) struct CGRect overlayInfluenceRectForBounds; // @synthesize overlayInfluenceRectForBounds=_overlayInfluenceRectForBounds;
@property(readonly, nonatomic) struct CGRect influenceRectForBounds; // @synthesize influenceRectForBounds=_influenceRectForBounds;
@property(readonly, nonatomic) unsigned long long traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) BOOL hasBlendedLayer; // @synthesize hasBlendedLayer=_hasBlendedLayer;
- (id)layerWithID:(id)arg1;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatDoNotCascade;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
@property(readonly, nonatomic) struct CGRect drawableFrame;
- (struct CGRect)overlayInfluenceRectForFrame;
- (struct CGRect)transformInfluenceRectToParent:(struct CGRect)arg1;
- (struct CGRect)influenceRectForFrame;
- (struct CGRect)calculateOverlayInfluenceRectForBounds;
- (struct CGRect)calculateInfluenceRectForBounds;
- (void)decodePropertiesWithCoder:(id)arg1;
- (struct CGRect)absoluteOverlayInfluenceRectForAncestorGroups:(id)arg1;
- (struct CGRect)absoluteInfluenceRectForAncestorGroups:(id)arg1;
- (struct CGRect)absoluteRectForAncestorGroups:(id)arg1;
@property(readonly, nonatomic) struct CGRect frameForTransforms;
@property(readonly, nonatomic) NSAffineTransform *transform;
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
- (id)transformForRect:(struct CGRect)arg1;
@property(readonly, nonatomic) MSImmutableStyle *usedStyle;
- (id)children;
@property(readonly, nonatomic) struct CGPoint origin;
- (BOOL)hasClippingMask;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) struct CGRect bounds;
- (BOOL)calculateHasBlendedLayer;
@property(readonly, nonatomic) BOOL hasActiveBackgroundBlur;
- (BOOL)hasBitmapStylesEnabled;
@property(readonly, nonatomic) BOOL hasTransforms;
@property(readonly, nonatomic) BOOL isLayerExportable;
- (void)objectDidInit;
- (id)lastLayer;
- (id)firstLayer;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 classFilter:(Class)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (BOOL)differsFromLayer:(id)arg1;
@property(readonly, nonatomic) NSArray *sublayersForTreeDiff;
- (BOOL)shouldSkipDrawing;
- (BOOL)transparencyLayerUseRectCondition;
- (BOOL)shouldRenderInTransparencyLayer;
- (Class)rendererClass;
- (void)configureBackgroundOfRequest:(id)arg1;
- (id)renderBitmapEffects:(id)arg1;
- (void)writeSVGToElement:(id)arg1 withExporter:(id)arg2;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (struct CGRect)relativeRectWithExporter:(id)arg1;
- (struct CGPoint)layerOffsetWithExporter:(id)arg1;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2;
- (id)svgStyle;
- (void)addGradientsToDocument:(id)arg1;
- (void)addChildrenToElement:(id)arg1 exporter:(id)arg2;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (BOOL)shouldIncludeLayerInExportRequest:(id)arg1 withAncestorGroups:(id)arg2;
- (BOOL)intersectsSlice:(id)arg1 withAncestorGroups:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric; // @dynamic exportOptionsGeneric;
@property(readonly, nonatomic) id <MSRect> frameGeneric; // @dynamic frameGeneric;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) NSObject<NSCopying><NSCoding> *originalObjectID;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;

@end

